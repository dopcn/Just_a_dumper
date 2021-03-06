//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XCFAdInfoModel.h"

#import "XCFAdvertiseableProtocol-Protocol.h"

@class NSString, XCFMicroVideo;

@interface XCFSponsoredAdInfoModel : XCFAdInfoModel <XCFAdvertiseableProtocol>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_content;
    NSString *_adImageURLString;
    XCFMicroVideo *_microVideo;
    struct CGSize _adImageSize;
}

+ (id)adInfoModelFromDataDic:(id)arg1;
+ (_Bool)canHandleDic:(id)arg1;
@property(retain, nonatomic) XCFMicroVideo *microVideo; // @synthesize microVideo=_microVideo;
@property(nonatomic) struct CGSize adImageSize; // @synthesize adImageSize=_adImageSize;
@property(copy, nonatomic) NSString *adImageURLString; // @synthesize adImageURLString=_adImageURLString;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)adUrl;
@property(readonly, copy, nonatomic) NSString *adURLString;
- (void)setAttributes:(id)arg1;
- (id)tabItemImage;
- (id)trackingPlaceholders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

