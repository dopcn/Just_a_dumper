//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UMANUtils : NSObject
{
    _Bool _openLog;
    NSString *_prefix;
}

+ (id)JSONValue:(id)arg1;
+ (id)JSONFragment:(id)arg1;
+ (void)presentStoreProductForApp:(id)arg1 in:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)makingACall:(id)arg1;
+ (_Bool)openUrl:(id)arg1;
+ (_Bool)canOpenUrl:(id)arg1;
+ (id)getBundleRes:(id)arg1 bundleName:(id)arg2;
+ (id)addImage:(id)arg1 toImage:(id)arg2;
+ (void)printViews:(id)arg1 depth:(unsigned long long)arg2;
+ (void)printViewHierarchy:(id)arg1 depth:(unsigned long long)arg2;
+ (int)getRand:(int)arg1 max:(int)arg2;
+ (void)outLog:(id)arg1;
+ (_Bool)openLog;
+ (void)setPrefix:(id)arg1;
+ (void)setOpenLog:(_Bool)arg1;
+ (id)base64EncodeData:(id)arg1;
+ (id)base64Encode:(id)arg1;
+ (id)urlDecode:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (_Bool)isPureFloat:(id)arg1;
+ (_Bool)isPureInt:(id)arg1;
+ (id)subString:(id)arg1 encode:(unsigned long long)arg2 bytesLength:(unsigned long long)arg3;
+ (id)queryStringWithDictionary:(id)arg1;
+ (id)dictionaryWithQueryString:(id)arg1;
+ (id)getDictionaryFromDictionary:(id)arg1 key:(id)arg2;
+ (long long)getIntergerFromDictionary:(id)arg1 key:(id)arg2;
+ (id)getStringFromDictionary:(id)arg1 key:(id)arg2;
+ (id)md5Value:(id)arg1;
+ (id)utilsVersion;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) _Bool openLog; // @synthesize openLog=_openLog;
- (id)autorelease;
- (void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

