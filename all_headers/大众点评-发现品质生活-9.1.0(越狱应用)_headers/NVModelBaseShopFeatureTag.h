//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseShopFeatureTag : NVBaseModel
{
    long long _tagId;
    NSString *_pictureUrl;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end

