//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UIWebViewExPreferences : NSObject
{
    id _preferencesInstance;
}

+ (id)allocInstance;
+ (id)standardPreferences;
@property(retain, nonatomic) id preferencesInstance; // @synthesize preferencesInstance=_preferencesInstance;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (unsigned int)webViewCacheModel;
- (void)setWebViewCacheModel:(unsigned int)arg1;
- (int)maxPageCacheSize;
- (void)setMaxPageCacheSize:(int)arg1;
@property(nonatomic, getter=usesWKEncodingDetector, setter=setUsesWKEncodingDetector:) _Bool usesWKEncodingDetector;
@property(nonatomic, getter=autoLoadWebImages, setter=setAutoLoadWebImages:) _Bool autoLoadWebImages;
- (void)applyToWebView:(id)arg1;
- (id)sysPreferences;
- (void)defaultOptimize;
- (void)dealloc;

@end

