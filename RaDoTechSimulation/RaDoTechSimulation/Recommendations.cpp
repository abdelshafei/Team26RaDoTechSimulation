#include "Recommendations.h"

Recommendations::Recommendations()
{

}

void Recommendations::generateRecommendations(HealthData* healthData, Ui::MainWindow* ui){
    if (healthData){
        ui->HyperactiveLabel->setText(hyperactivePlaceholder());
    }
}
QString Recommendations::hyperactivePlaceholder(){
    QString text = "A steady sign of cardiac muscle activation during physical exertion (normally stimulants and tonics - caffeine, nicotine, ergot alkaloids, marijuana alkoloids, recently tonic and energy drinks. Often, the reaction to psycho-emotional arousal, acute stress reactions, the physiological state of sexual desire and the main condition for a long effective sexual intercourse for a man. For adolescents and actively growing children, the physiological state of growth of the heart muscle. As a state, successive failure is a good prognostic sign of the effectiveness of programs for the treatment and rehabilitation of cardiovascular diseases and heart failure. Long-term asymptomatic activation of the heart indicates the development of the hypertonic mechanism of the functioning of the cardiovascular system (the upper limit of arterial pressure is 140/90 mm. Hg). When observing activation only in the minor or only in the great circulation circle, it indicates the mechanisms of adaptation of the heart along the large or small circle of the blood circulation. This clearly indicates the presence of cardiac pathology with ECG, USDG, or other in-depth examination methods.";
    return text;
}
