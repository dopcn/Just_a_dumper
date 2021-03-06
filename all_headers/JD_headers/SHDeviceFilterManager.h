//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SHCustomCardView;

@interface SHDeviceFilterManager : NSObject
{
    NSMutableArray *arrTableViewFindDevice;
    NSMutableArray *arrTableViewDeviceBind;
    NSMutableArray *arrTableViewDeviceNoBind;
    NSMutableArray *arrTableViewDeviceOtherBind;
    NSMutableArray *arrTableViewDeviceFailBind;
    NSString *_productUUID;
    NSString *_DeviceNameStr;
    SHCustomCardView *_cardView;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSHDeviceFilterManager;
@property(retain, nonatomic) SHCustomCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) NSString *DeviceNameStr; // @synthesize DeviceNameStr=_DeviceNameStr;
@property(retain, nonatomic) NSString *productUUID; // @synthesize productUUID=_productUUID;
- (void).cxx_destruct;
- (void)saveSuccessFeedids;
- (void)resetArr;
- (void)updateTableView;
- (id)getDictForJoylinkWith:(id)arg1;
- (void)pushToNextPage:(id)arg1 andCurrentIndex:(long long)arg2 withDeviceName:(id)arg3;
- (void)activateBindWithParam:(id)arg1 andIndex:(long long)arg2;
- (void)bindProduct;
- (id)findDictByFeedId:(id)arg1;
- (void)requestGetBindStatusByFeedIdsWithArray:(id)arg1 uuid:(id)arg2 deviceId:(id)arg3;
- (_Bool)isAlreadyBingDevice:(id)arg1;
- (void)addItemToDataDict:(id)arg1 itemDict:(id)arg2 bindStatus:(int)arg3 bindUser:(id)arg4;
- (void)removeItemFromNoBindAndBind:(id)arg1;
- (void)removeItemFromNoBindAndOther:(id)arg1;
- (void)removeItemFromBindAndOther:(id)arg1;
- (_Bool)isEqualToFeedid:(id)arg1 withFeedid:(id)arg2;
- (_Bool)isAfterQueryGetBindStatus:(id)arg1;
- (void)addToTableSourceFromFindDevices:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

