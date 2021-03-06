//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AJXModuleProtocol-Protocol.h"

@class NSString;

@protocol LTMAJXOfflineResourceExport <AJXModuleProtocol>
- (void)setStatusBarType:(long long)arg1;
- (void)bindObserverForAllCities:(void (^)(NSArray *))arg1;
- (_Bool)autoCarHasConnection;
- (void)showMapWithIdentity:(NSString *)arg1;
- (void)requestPassCitiesWithStartAdcode:(long long)arg1 endAdcode:(long long)arg2 callback:(void (^)(NSArray *))arg3;
- (void)performDownloadCmd:(NSString *)arg1 param:(NSString *)arg2;
- (void)orderedCityListWithCallback:(void (^)(NSArray *))arg1;
- (void)hotCitiesWithCallback:(void (^)(NSArray *))arg1;
- (void)allProvincesWithCallback:(void (^)(NSArray *))arg1;
- (void)allTaskProvincesWithCode:(NSString *)arg1 callback:(void (^)(NSArray *))arg2;
- (void)readNewFeaturesWithPageID:(NSString *)arg1;
- (void)hasNewFeaturesWithPageID:(NSString *)arg1 callback:(void (^)(NSArray *))arg2;
- (void)hasAlreadyDownloadedCitiesWithAdcodes:(NSString *)arg1 callback:(void (^)(NSArray *))arg2;
- (void)getCityDownloadStatusWithAdcode:(NSString *)arg1 callback:(void (^)(NSArray *))arg2;
- (void)getCurrentCityDownloadInfo:(void (^)(NSArray *))arg1;
- (void)gotoFeedbackPage;
- (void)gotoFAQPage;
- (void)setAutoDownloadInWifiSwitchState:(NSString *)arg1;
- (void)setOfflineNaviSwitchState:(NSString *)arg1;
- (void)setOfflineMapSwitchState:(NSString *)arg1;
- (void)getAutoDownloadInWifiSwitchState:(void (^)(NSArray *))arg1;
- (void)getOfflineNaviSwitchState:(void (^)(NSArray *))arg1;
- (void)getOfflineMapSwitchState:(void (^)(NSArray *))arg1;
- (void)getSavedTraffic:(void (^)(NSArray *))arg1;
- (void)getFreeDeviceSpace:(void (^)(NSArray *))arg1;
- (void)getDeviceSpaceInfo:(void (^)(NSArray *))arg1;
- (void)waitInit:(void (^)(NSArray *))arg1;
- (void)checkInit:(void (^)(NSArray *))arg1;

@optional
- (void)showMapWithIdentity:(NSString *)arg1:(id)arg2 __AJX_EXPORT_AS__viewMap:(id)arg3;
- (void)requestPassCitiesWithStartAdcode:(long long)arg1 endAdcode:(long long)arg2 callback:(void (^)(NSArray *))arg3:(id)arg4 __AJX_EXPORT_AS__requestCarRouteAlongCities:(id)arg5;
- (void)performDownloadCmd:(NSString *)arg1 param:(NSString *)arg2:(id)arg3 __AJX_EXPORT_AS__performDownloadCmd:(id)arg4;
- (void)orderedCityListWithCallback:(void (^)(NSArray *))arg1:(id)arg2 __AJX_EXPORT_AS__getAlongWayCityInfo:(id)arg3;
- (void)hotCitiesWithCallback:(void (^)(NSArray *))arg1:(id)arg2 __AJX_EXPORT_AS__getHotCityInfo:(id)arg3;
- (void)allProvincesWithCallback:(void (^)(NSArray *))arg1:(id)arg2 __AJX_EXPORT_AS__getAllCityInfo:(id)arg3;
- (void)allTaskProvincesWithCode:(NSString *)arg1 callback:(void (^)(NSArray *))arg2:(id)arg3 __AJX_EXPORT_AS__getAllDownloadCityList:(id)arg4;
- (void)readNewFeaturesWithPageID:(NSString *)arg1:(id)arg2 __AJX_EXPORT_AS__readNewFeaturesWithPageID:(id)arg3;
- (void)hasNewFeaturesWithPageID:(NSString *)arg1 callback:(void (^)(NSArray *))arg2:(id)arg3 __AJX_EXPORT_AS__hasNewFeaturesWithPageID:(id)arg4;
- (void)hasAlreadyDownloadedCitiesWithAdcodes:(NSString *)arg1 callback:(void (^)(NSArray *))arg2:(id)arg3 __AJX_EXPORT_AS__isDownloaded:(id)arg4;
- (void)getCityDownloadStatusWithAdcode:(NSString *)arg1 callback:(void (^)(NSArray *))arg2:(id)arg3 __AJX_EXPORT_AS__getCityDownloadStatusWithAdcode:(id)arg4;
@end

