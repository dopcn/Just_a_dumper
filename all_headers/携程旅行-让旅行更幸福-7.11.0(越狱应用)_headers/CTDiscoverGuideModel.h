//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTDiscoverGuideModel : CTJSONModel
{
    NSString *_Title;
    NSString *_SubTitle;
    NSString *_ImageURL;
    NSString *_URL;
    NSString *_subImageUrl;
    long long _ID;
    NSString *_Type;
}

@property(copy, nonatomic) NSString *Type; // @synthesize Type=_Type;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *subImageUrl; // @synthesize subImageUrl=_subImageUrl;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *ImageURL; // @synthesize ImageURL=_ImageURL;
@property(copy, nonatomic) NSString *SubTitle; // @synthesize SubTitle=_SubTitle;
@property(copy, nonatomic) NSString *Title; // @synthesize Title=_Title;
- (void).cxx_destruct;

@end

