//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HomePageChannelDisplayItem-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface HomePageChannelSeeMorePromotionItemsView : UIView <HomePageChannelDisplayItem>
{
    UIImageView *_arrowIcon;
    UILabel *_textLabel;
}

+ (struct CGSize)calculateSizeWithData:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
- (void).cxx_destruct;
- (void)populateWithData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

