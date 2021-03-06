//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISDBaseCustomView.h"

@class NSString, UIImage, UIImageView, UILabel;
@protocol ISDRadioButtonDelegate;

@interface ISDRadioButton : ISDBaseCustomView
{
    UIImage *_normalImage;
    UIImage *_selectImage;
    _Bool _selected;
    id <ISDRadioButtonDelegate> _delegate;
    NSString *_title;
    UIImageView *_imgView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <ISDRadioButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_setSelected:(_Bool)arg1;
- (void)selectStatusUpdate:(id)arg1;
- (void)p_setTitle:(id)arg1 image:(id)arg2;
- (void)updateSelect:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 normalImage:(id)arg3 selectImage:(id)arg4;

@end

