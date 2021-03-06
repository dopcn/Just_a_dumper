//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class NSString, UILabel, UIScrollView, UIView, WBCopyLabel;

@interface WBQRCodeTextResultViewController : WBViewController
{
    NSString *_text;
    UILabel *_titleLabel;
    UIView *_lineView;
    UIScrollView *_scrollview;
    WBCopyLabel *_textLabel;
}

@property(retain, nonatomic) WBCopyLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIScrollView *scrollview; // @synthesize scrollview=_scrollview;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)prepareSubViews;
- (void)backAction:(id)arg1;
- (void)viewDidLoad;

@end

