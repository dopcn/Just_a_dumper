//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface PostDataModel : MTLModel <MTLJSONSerializing>
{
    long long _type;
    NSNumber *_adID;
    NSString *_adTrackURL;
    NSArray *_trackUrlList;
    NSString *_displayInfo;
    NSNumber *_displayDuration;
    NSString *_openURL;
    NSString *_webURL;
    NSString *_appName;
    NSString *_appleID;
    NSString *_downloadURL;
    NSString *_ipaURL;
    long long _displayType;
    NSString *_buttonText;
    NSString *_logExtra;
    NSString *_appURL;
    NSString *_tabURL;
    NSString *_source;
    NSArray *_tipMutiImageModel;
}

+ (id)tipMutiImageModelJSONTransformer;
+ (id)logExtraJSONTransformer;
+ (id)appleIDJSONTransformer;
+ (id)displayTypeJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *tipMutiImageModel; // @synthesize tipMutiImageModel=_tipMutiImageModel;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *tabURL; // @synthesize tabURL=_tabURL;
@property(copy, nonatomic) NSString *appURL; // @synthesize appURL=_appURL;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) NSString *ipaURL; // @synthesize ipaURL=_ipaURL;
@property(copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSNumber *displayDuration; // @synthesize displayDuration=_displayDuration;
@property(copy, nonatomic) NSString *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(retain, nonatomic) NSArray *trackUrlList; // @synthesize trackUrlList=_trackUrlList;
@property(copy, nonatomic) NSString *adTrackURL; // @synthesize adTrackURL=_adTrackURL;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

