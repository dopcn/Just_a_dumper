//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CardImageADView.h"

#import "ADViewDelegate-Protocol.h"

@class NSString, UIImageView;

@interface CardImageAppADView : CardImageADView <ADViewDelegate>
{
    UIImageView *_downloadImgView;
}

+ (id)makeWithPlacementType:(int)arg1 ADprofile:(id)arg2;
+ (void)load;
@property(retain, nonatomic) UIImageView *downloadImgView; // @synthesize downloadImgView=_downloadImgView;
- (void).cxx_destruct;
- (void)makeView;
- (id)initWithPlacementType:(int)arg1 ADprofile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

