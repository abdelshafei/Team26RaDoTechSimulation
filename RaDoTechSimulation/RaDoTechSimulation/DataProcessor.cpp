#include "DataProcessor.h"
#include <numeric> // For validation (sum function)

DataProcessor::DataProcessor() : rawData({}) {}

void DataProcessor::setRawData(const std::vector<float>& data)
{
    rawData = data;
}

std::map<std::string, float> DataProcessor::processData()
{
    // Example: Map raw data to organs
    std::map<std::string, float> processedData;

    const std::vector<std::string> organs1 = {"Heart", "Liver", "Lungs", "Kidneys", "Stomach"};
    const std::vector<std::string> organs = {"H1 (Lung), Left",
    "H1 (Lung), Right",
    "H2 (Pericardium), Left",
    "H2 (Pericardium), Right",
    "H3 (Heart), Left",
    "H3 (Heart), Right",
    "H4 (Small Intestine), Left",
    "H4 (Small Intestine), Right",
    "H5 (Lymph), Left",
    "H5 (Lymph), Right",
    "H6 (Large Intestine), Left",
    "H6 (Large Intestine), Right",
    "F1 (Spleen), Left",
    "F1 (Spleen), Right",
    "F2 (Liver), Left",
    "F2 (Liver), Right",
    "F3 (Kidney), Left",
    "F3 (Kidney), Right",
    "F4 (Bladder), Left",
    "F4 (Bladder), Right",
    "F5 (Gallbladder), Left",
    "F5 (Gallbladder), Right",
    "F6 (Stomach), Left",
    "F6 (Stomach), Right"
};

    for (size_t i = 0; i < organs.size() && i < rawData.size(); ++i) {
        processedData[organs[i]] = rawData[i];
    }

    return processedData;
}

bool DataProcessor::validateData() const
{
    // Example: Validation checks if data is non-zero and has expected size
    return !rawData.empty() && std::accumulate(rawData.begin(), rawData.end(), 0.0f) > 0;
}
