//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel;
@protocol CTHotelFavoriteViewDelegate;

@interface CTHotelFavoriteView : UIView <UIGestureRecognizerDelegate>
{
    id <CTHotelFavoriteViewDelegate> _delegate;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <CTHotelFavoriteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goToFavoriteHotelList;
- (void)fadeFavoriteView;
- (void)showInView:(id)arg1 stayTime:(double)arg2;
- (void)setFavoriteMaskView:(struct CGSize)arg1;
- (void)setFavoriteType:(long long)arg1;
- (void)initBaseView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

