//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNBaseJSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional;

@interface BDNCouponHomeGuessYouLikeTemplateInfoModel : BDNBaseJSONModel
{
    NSString<Optional> *_label;
    NSArray<Optional> *_content;
    NSNumber<Optional> *_type;
}

@property(copy, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<Optional> *label; // @synthesize label=_label;
- (void).cxx_destruct;

@end

