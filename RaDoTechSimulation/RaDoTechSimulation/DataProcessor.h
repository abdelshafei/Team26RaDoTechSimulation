#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H

#include <vector>
#include <map>
#include <string>

/* Class Purpose:
    * The DataProcessor class is used to process raw data collected from the RaDoTech device.
    * The raw data is processed to generate a map of meridian names and their respective conductance values.
    * The processed data can be used to generate health indicators and recommendations.
    * 
    * Class Functions:
    * DataProcessor() - Constructor for the DataProcessor class. Initializes the raw data to an empty vector.
    * setRawData(const std::vector<float>& data) - Sets the raw data to the provided data.
    * processData() - Processes the raw data and returns a map of meridian names and their conductance values.
    * validateData() - Validates the raw data. Returns true if the raw data is not empty and the sum of the data is greater than 0.
    * 
    * Class Attributes:
    * rawData - A vector of floats representing the raw data collected from the RaDoTech device.
*/

class DataProcessor
{
private:
    std::vector<float> rawData;

public:
    DataProcessor();
    void setRawData(const std::vector<float>& data);
    std::map<std::string, float> processData();
    bool validateData() const;
};

#endif // DATAPROCESSOR_H
