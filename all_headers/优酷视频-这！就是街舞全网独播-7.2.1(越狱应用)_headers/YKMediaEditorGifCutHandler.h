//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface YKMediaEditorGifCutHandler : UIView
{
    _Bool _highlight;
    long long _style;
    UIImageView *_handler;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(readonly, nonatomic) UIImageView *handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;

@end

