//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface IESEffectModel : MTLModel <MTLJSONSerializing>
{
    NSString *_effectName;
    NSString *_effectIdentifier;
    NSString *_sourceIdentifier;
    NSString *_hintLabel;
    unsigned long long _effectType;
    unsigned long long _category;
    NSArray *_fileDownloadURLs;
    NSArray *_iconDownloadURLs;
    NSString *_sdkVersion;
    NSString *_appVersion;
    NSString *_devicePlatform;
    NSString *_fileDownloadURI;
    NSString *_iconDownlaodURI;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *iconDownlaodURI; // @synthesize iconDownlaodURI=_iconDownlaodURI;
@property(readonly, nonatomic) NSString *fileDownloadURI; // @synthesize fileDownloadURI=_fileDownloadURI;
@property(readonly, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSArray *iconDownloadURLs; // @synthesize iconDownloadURLs=_iconDownloadURLs;
@property(readonly, nonatomic) NSArray *fileDownloadURLs; // @synthesize fileDownloadURLs=_fileDownloadURLs;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long effectType; // @synthesize effectType=_effectType;
@property(readonly, nonatomic) NSString *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(readonly, nonatomic) NSString *effectName; // @synthesize effectName=_effectName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

