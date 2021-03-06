//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TrainFunManager : NSObject
{
}

+ (void)setAppendProductSwitchByUser:(_Bool)arg1;
+ (_Bool)getAppendProductSwitchByUser;
+ (_Bool)isValidEnglishFirstName:(id)arg1 lastName:(id)arg2;
+ (_Bool)isValidChineseName:(id)arg1;
+ (id)navRootViewController;
+ (void)fitHeightForLabel:(id)arg1;
+ (id)getVerify:(id)arg1;
+ (id)LzmaDecode:(id)arg1;
+ (_Bool)canBuyStudentTicket:(id)arg1 seatName:(id)arg2;
+ (_Bool)dateCanBuyStudentTicket:(id)arg1;
+ (_Bool)seatCanBuyStudentTicket:(id)arg1;
+ (void)removeLatestTrafficTransferInfo;
+ (void)cleanTrafficTransferInfo;
+ (void)saveTrafficTransferInfoWithKey:(id)arg1 model:(id)arg2;
+ (id)latestTrafficTransferInfo;
+ (id)trafficTransferInfoWithKey:(id)arg1;
+ (void)saveTransferInfoWithSessionKey:(id)arg1;
+ (void)cleanTransitInfo;
+ (void)removeTransitInfoWithKey:(id)arg1;
+ (void)saveTransitInfoWithKey:(id)arg1 value:(id)arg2;
+ (id)transitInfoWithKey:(id)arg1;
+ (void)buildCRNCallBack:(long long)arg1 data:(id)arg2 message:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)encodeURLComponent:(id)arg1;
+ (id)getFreeInsuranceURL:(id)arg1 contactPhone:(id)arg2 orderId:(long long)arg3;
+ (id)getVisibleViewController;
+ (id)getVisibleNavigationController;
+ (void)savePassengers:(id)arg1;
+ (id)loadPassengers;
+ (void)existReminderWithDate:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)addReminderNotifyForCRN:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)addReminderNotify:(id)arg1 title:(id)arg2;
+ (id)getAllShowWeek:(id)arg1;
+ (id)dateTimeStringWithString:(id)arg1;
+ (id)transform12306TrainModelWithTrainInfoModel:(id)arg1 departDate:(id)arg2;
+ (_Bool)isValidCtripPassengerName:(id)arg1;
+ (_Bool)isValid12306PassengerName:(id)arg1;
+ (void)removeLocal12306ChildWithName:(id)arg1;
+ (id)local12306ChildPassenger;
+ (void)save12306ChildPassengerInLocalWithName:(id)arg1 birthday:(id)arg2;
+ (long long)yearsOldFromBirthday:(id)arg1;
+ (void)saveBirthdayToLocal:(id)arg1;
+ (id)get12306PassengerBirthday:(id)arg1;
+ (id)getBirthdayFromIDCard:(id)arg1;
+ (id)getOffRubbishWithString:(id)arg1;
+ (id)convertDateStringFromLocale:(id)arg1 formart:(id)arg2;
+ (id)convertDateStringFromLocale:(id)arg1;
+ (id)convertDateStringFromServer:(id)arg1 formart:(id)arg2;
+ (id)convertDateStringFromServer:(id)arg1;
+ (double)cellHeightForDevice;
+ (void)show12306NoAccessPrompt:(CDUnknownBlockType)arg1;
+ (id)stationNameAddZhan:(id)arg1;
+ (id)errorInfoWithCode:(int)arg1;
+ (id)convertToCTTrainDictModel:(id)arg1;
+ (_Bool)isChinese:(id)arg1;
+ (id)trainRunTimeString:(long long)arg1;
+ (void)adjustViewWidth:(id)arg1 width:(double)arg2;
+ (void)adjustViewWidth:(id)arg1;
+ (struct CGRect)get9ClipRect:(struct CGSize)arg1 sizeTL:(struct CGSize)arg2 sizeRB:(struct CGSize)arg3 num:(long long)arg4 origin:(long long)arg5;
+ (id)imageWith9ClipRect:(id)arg1 sizeDest:(struct CGSize)arg2 sizeClip:(struct CGSize)arg3;
+ (id)imageWith9ClipRect:(id)arg1 sizeDest:(struct CGSize)arg2 x:(long long)arg3 y:(long long)arg4;
+ (id)imageWith9ClipRect:(id)arg1 sizeDest:(struct CGSize)arg2;
+ (id)imageWith9ClipRect:(id)arg1 sizeDest:(struct CGSize)arg2 sizeTL:(struct CGSize)arg3 sizeRB:(struct CGSize)arg4;
+ (void)draw9ClipRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2 source:(id)arg3 sizeTL:(struct CGSize)arg4 sizeRB:(struct CGSize)arg5;
+ (void)draw9ClipRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2 name:(id)arg3 cl:(long long)arg4 cr:(long long)arg5;
+ (void)draw9ClipRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2 name:(id)arg3 sizeTL:(struct CGSize)arg4 sizeRB:(struct CGSize)arg5;
+ (void)draw9ClipRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2 source:(id)arg3;
+ (void)draw9ClipRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2 name:(id)arg3;
+ (id)endImageContext;
+ (struct CGContext *)startImageContext:(struct CGSize)arg1;
+ (_Bool)isPureInt:(id)arg1;
+ (void)sortArray:(id)arg1 sort:(id)arg2;
+ (id)encryptString:(id)arg1 key:(id)arg2 vi:(id)arg3;
+ (id)encryptString:(id)arg1 key:(id)arg2;
+ (id)encryptString:(id)arg1;
+ (id)decryptString:(id)arg1 key:(id)arg2 vi:(id)arg3;
+ (id)decryptString:(id)arg1 key:(id)arg2;
+ (id)decryptString:(id)arg1;
+ (id)decode12306Info:(id)arg1;
+ (id)encode12306Info:(id)arg1;
+ (_Bool)isSleeperWithSeatName:(id)arg1;
+ (id)trainTypeWithTrainCode:(id)arg1;
+ (id)priceTypeFromDouble:(double)arg1;
+ (id)rmbStringWithDouble:(double)arg1;
+ (id)fixDateString:(id)arg1 formate:(id)arg2;
+ (id)dateFromString:(id)arg1;
+ (void)removeAllAtPath:(id)arg1;
+ (void)removePath:(id)arg1;
+ (id)getResFileName:(id)arg1;
+ (id)getResPath;
+ (id)getCacheDocFileName:(id)arg1;
+ (id)getDocFileName:(id)arg1;
+ (id)getCacheDocPath;
+ (id)getDocPath;
+ (id)getNewID;
+ (_Bool)canDebugJavaScript;
+ (id)colorWithHexString:(id)arg1;
+ (id)jumpURL:(id)arg1 fromViewController:(id)arg2 isHideNav:(_Bool)arg3 isShowLoadingPage:(_Bool)arg4 h5ViewControllerBackActionBlock:(CDUnknownBlockType)arg5;
+ (id)jumpURL:(id)arg1 fromViewController:(id)arg2 isHideNav:(_Bool)arg3 isShowLoadingPage:(_Bool)arg4;
+ (id)jumpURL:(id)arg1 fromViewController:(id)arg2;
+ (struct CGSize)sizeWithString:(id)arg1 font:(id)arg2;
+ (id)replaceUnicode:(id)arg1;
+ (id)checkImageName:(id)arg1;
+ (double)calculateRefundFeeForTrain:(double)arg1 serviceFeePercentage:(double)arg2 lowestServiceFee:(double)arg3 passengerCount:(long long)arg4;
+ (double)calculateOrderResultForTrain:(double)arg1 invoicePrice:(long long)arg2 deliveryPrice:(long long)arg3 servicePrice:(long long)arg4 theCount:(long long)arg5 couponPrice:(long long)arg6;
+ (double)calculateOrderResultForTrain:(double)arg1 invoicePrice:(long long)arg2 theCount:(long long)arg3;
+ (void)showCoverTextAtViewController:(id)arg1 text:(id)arg2;
+ (void)doHideCoverText:(id)arg1;
+ (id)findViewControllerFromView:(id)arg1;
+ (id)fontWithNames:(id)arg1 size:(double)arg2;
+ (id)fontWithStyle:(int)arg1 size:(double)arg2;
+ (id)fontWithStyle:(int)arg1;
+ (void)adjustButtonImageToTop:(id)arg1 span:(long long)arg2 forState:(unsigned long long)arg3;
+ (void)adjustButtonImageToTop:(id)arg1;
+ (void)adjustButtonImageToRight:(id)arg1 span:(long long)arg2 forState:(unsigned long long)arg3;
+ (void)adjustButtonImageToRight:(id)arg1;
+ (void)adjustButtonRightImage:(id)arg1 image:(id)arg2 right:(long long)arg3;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithRGB:(long long)arg1;
+ (void)adjustViewBoard:(id)arg1 color:(id)arg2 radius:(long long)arg3 width:(long long)arg4;
+ (void)adjustViewBoard:(id)arg1 color:(id)arg2 radius:(long long)arg3;
+ (void)adjustViewBoard:(id)arg1 color:(id)arg2;
+ (void)adjustViewBoard:(id)arg1 rgb:(unsigned long long)arg2;
+ (id)addSeparatorToEdge:(unsigned int)arg1 color:(id)arg2 toView:(id)arg3;
+ (id)addLineToView:(id)arg1 at:(int)arg2 fix:(long long)arg3 color:(id)arg4 width:(double)arg5 margin:(struct UIEdgeInsets)arg6;
+ (id)addLineToView:(id)arg1 at:(int)arg2 color:(id)arg3 width:(double)arg4 margin:(struct UIEdgeInsets)arg5;
+ (id)addLineToView:(id)arg1 at:(int)arg2 color:(id)arg3 margin:(struct UIEdgeInsets)arg4;
+ (id)addLineToView:(id)arg1 at:(int)arg2 color:(id)arg3 width:(double)arg4;
+ (id)addLineToView:(id)arg1 at:(int)arg2 color:(id)arg3;
+ (id)getLineFromView:(id)arg1 at:(int)arg2 fix:(long long)arg3;
+ (id)getLineFromView:(id)arg1 at:(int)arg2;
+ (long long)tagForViewLineWithAt:(int)arg1 fix:(long long)arg2;

@end

