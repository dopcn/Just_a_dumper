//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface KTVConcertDescription : MTLModel <MTLJSONSerializing>
{
    _Bool _onShow;
    long long _concertId;
    NSString *_icon;
    NSString *_content;
}

+ (id)onShowJSONTransformer;
+ (id)concertIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool onShow; // @synthesize onShow=_onShow;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
- (void).cxx_destruct;

@end

