//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADRTRelatedAdResponse.h"

@class TADItemInfo;

@interface TADRTNewsArticleResponse : TADRTRelatedAdResponse
{
    TADItemInfo *_textAd;
    TADItemInfo *_picAd;
}

@property(retain, nonatomic) TADItemInfo *picAd; // @synthesize picAd=_picAd;
@property(retain, nonatomic) TADItemInfo *textAd; // @synthesize textAd=_textAd;
- (void).cxx_destruct;
- (id)relReadingAdsForNewsInRange:(struct _NSRange)arg1;
- (id)realChannel;
- (id)initWithResponse:(id)arg1 requestItem:(id)arg2;

@end

