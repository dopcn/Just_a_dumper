//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class NSNumber, NSString, UIImage, UIImageView, UILabel;
@protocol JDCheckBoxDelegate;

@interface JDCheckBox : JDView
{
    UIImageView *iconView_;
    _Bool _checked;
    _Bool _enabled;
    id <JDCheckBoxDelegate> delegate;
    UILabel *_titleLabel;
    NSString *_title;
    NSNumber *_Id;
    UIImage *_unCheckImg;
    UIImage *_checkImg;
}

@property(retain, nonatomic) UIImage *checkImg; // @synthesize checkImg=_checkImg;
@property(retain, nonatomic) UIImage *unCheckImg; // @synthesize unCheckImg=_unCheckImg;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id=_Id;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) __weak id <JDCheckBoxDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)alignmentCenterCheckBox;
- (void)layoutSubviews;
- (void)setCheckInonUpImg:(id)arg1 downImg:(id)arg2 withHeight:(double)arg3;
- (void)setCheckInonUpImg:(id)arg1 downImg:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (void)dealloc;

@end

