/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource> {
    PKFelicaPassProperties * _properties;
    NSMutableArray * _train1Titles;
    NSMutableArray * _train1Values;
    NSMutableArray * _train2Titles;
    NSMutableArray * _train2Values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKFelicaPassProperties *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareLabelsAndValues;
- (id)_transitTicketTitleForDetail:(unsigned long long)arg1;
- (id)_transitTicketValueForDetail:(unsigned long long)arg1 forSecondaryTrain:(bool)arg2;
- (id)initWithFelicaProperty:(id)arg1;
- (unsigned long long)numberOfLegs;
- (id)properties;
- (id)titleForLeg:(unsigned long long)arg1;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end