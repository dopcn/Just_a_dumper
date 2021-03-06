//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCCCity;

@interface WCCCityModel : NSObject
{
    NSString *_version;
    WCCCity *_currentCity;
    NSArray *_cityArray;
}

+ (id)loadDictionaryFromPlist;
+ (id)plistDocumentPath;
+ (id)plistPath;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) WCCCity *currentCity; // @synthesize currentCity=_currentCity;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)updateWithDictionary:(id)arg1;
- (id)cityForID:(id)arg1;
- (_Bool)existCityID:(id)arg1;
- (_Bool)existCityName:(id)arg1;
- (void)save;
- (void)load;
- (id)init;
- (void)dealloc;

@end

