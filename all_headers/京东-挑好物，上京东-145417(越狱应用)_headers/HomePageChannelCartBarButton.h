//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;
@protocol NSObject;

@interface HomePageChannelCartBarButton : UIButton
{
    UIImageView *_badgeImageView;
    UILabel *_badgeLabel;
    id <NSObject> _observer;
}

@property(retain, nonatomic) id <NSObject> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
- (void).cxx_destruct;
- (void)updateBadgeValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

