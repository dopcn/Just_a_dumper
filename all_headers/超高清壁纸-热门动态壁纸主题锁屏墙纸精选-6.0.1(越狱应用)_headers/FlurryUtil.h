//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryUtil : NSObject
{
}

+ (void)substituteParamsInURL:(id)arg1 withValuesDictionary:(id)arg2;
+ (id)getIPAddresses;
+ (id)getIPAddress:(_Bool)arg1;
+ (double)reduceLocationPrecision:(double)arg1;
+ (id)getFixedSalt;
+ (_Bool)updateIfChangedCookieValue:(id)arg1 forCookieKey:(id)arg2;
+ (id)md5String:(id)arg1;
+ (_Bool)hasUserOptedOut;
+ (void)setFlurryOptOut:(_Bool)arg1;
+ (long long)lastBootTime;
+ (unsigned long long)getDiskSize;
+ (unsigned long long)getFreeDiskspace;
+ (int)int32FromNSInteger:(long long)arg1;
+ (long long)getBatteryState;
+ (unsigned int)uint32FromNSUInteger:(unsigned long long)arg1;
+ (float)getBatteryLevel;
+ (id)allCounters;
+ (void)printCounters;
+ (void)decrementCounter:(id)arg1;
+ (void)decrementCounter:(id)arg1 locationName:(char *)arg2;
+ (void)incrementCounter:(id)arg1;
+ (void)incrementCounter:(id)arg1 locationName:(char *)arg2;
+ (id)preferredLanguage;
+ (_Bool)isAdTrackingEnabled;
+ (id)getFlurryId;
+ (char *)getLimit;
+ (char *)getUser;
+ (char *)getModule;
+ (char *)getMgr;
+ (char *)getId;
+ (id)generateCFUUIDBasedUID;
+ (id)generateCFUUID;
+ (void)cleanupStoredIdentifierForVendor;
+ (id)getIdentifierForVendor;
+ (id)getMACUID;
+ (id)MACString;
+ (id)hashDataToHexString:(char *)arg1 length:(unsigned long long)arg2;
+ (id)hashData:(id)arg1;
+ (BOOL)appIsCracked;
+ (BOOL)deviceIsJailbroken;
+ (id)devicePlatform;
+ (id)filePathDirectory;
+ (id)oldFilePathDirectoryUptilAgentVersion109;
+ (_Bool)isInWatchExtension;
+ (_Bool)isKeyWindowAlertView;
+ (struct _NSRange)flurryRangeOfData:(id)arg1 inData:(id)arg2;
+ (id)createParamKeysDictFromUrlParams:(id)arg1 paramsHeader:(id *)arg2 paramsKVString:(id *)arg3;
+ (int)dataChecksum:(id)arg1;
+ (void)generateChecksumTable;
+ (_Bool)isPortaitOrientationSupportedForWindow:(id)arg1;
+ (_Bool)theAppIsActive;
+ (_Bool)viewIsVisible:(id)arg1;
+ (id)encodeIllegalCharsToPercentEscapeString:(id)arg1;
+ (id)encodeToPercentEscapeString:(id)arg1;
+ (id)decodeFromPercentEscapeString:(id)arg1;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (long long)getSystemVersionAsAnInteger;
+ (_Bool)isRetina;
+ (_Bool)isIPad;
+ (_Bool)canvasInPortraitUpsideDown;
+ (_Bool)canvasInLandscapeLeft;
+ (_Bool)canvasInLandscapeRight;
+ (_Bool)canvasInLandscape;
+ (_Bool)deviceInLandscape;
+ (id)getCanvasOrientation;
+ (_Bool)canvasInLandscapeLeft:(id)arg1;
+ (_Bool)canvasInLandscapeRight:(id)arg1;
+ (_Bool)canvasInLandscape:(id)arg1;
+ (struct CGRect)deviceScreenBounds;
+ (struct CGRect)screenBounds;
+ (id)firstElementFromArray:(id)arg1;
+ (struct CGRect)screenBounds:(id)arg1;
+ (id)getOrientationStrFromInterfaceOrientation:(long long)arg1;
+ (void)archiveDictionary:(id)arg1 toFile:(id)arg2;
+ (id)safeUnarchiveObjectWithFile:(id)arg1;
+ (void)handleException:(id)arg1;
+ (void)setShowErrorInLogEnabled:(_Bool)arg1;
+ (int)logLevel;
+ (void)setLogLevel:(int)arg1;
+ (void)assertThreadIsNotMain;

@end

