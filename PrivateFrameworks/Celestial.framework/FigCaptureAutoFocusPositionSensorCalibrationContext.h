/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {
    NSMutableArray * _calibrationDataHistoryQueue;
    bool  _disableHistoryChecking;
    NSMutableDictionary * _iStopZEstimateDeltas;
    bool  _lastSuccessfulCalibrationWasDiscarded;
    int  _maxHistoryBuffer;
    int  _maxIStopZEstimateDifference;
    int  _minCompassHeadingChange;
    bool  _shouldDeleteOldVersion;
    bool  _supportsHistoryChecking;
}

@property (nonatomic) bool disableHistoryChecking;

+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;
+ (void)setStatusForCalibrationData:(id)arg1 status:(int)arg2;

- (bool)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)arg1 basedOnCalibrationHistory:(id)arg2;
- (bool)_calibrationDataIsWithinIStopZEstimateLimits:(id)arg1 basedOnCalibrationHistory:(id)arg2;
- (id)_initForUnitTestsSupportsHistoryChecking:(bool)arg1;
- (void)_pushToCalibrationHistoryQueue:(id)arg1;
- (bool)_shouldRejectCalibrationData:(id)arg1;
- (void)_updateIStopZEstimateDelta:(id)arg1;
- (id)calibrationDataHistory;
- (bool)disableHistoryChecking;
- (id)initWithSupportedDeviceNames:(id)arg1;
- (void)pushCalibrationDataToHistory:(id)arg1 isRejected:(bool*)arg2;
- (void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(bool)arg2 magneticFieldMagnitude:(double)arg3;
- (void)setDisableHistoryChecking:(bool)arg1;
- (void)setLastSuccessfulCalibrationData:(id)arg1;

@end
