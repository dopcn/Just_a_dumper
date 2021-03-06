//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;
@protocol AlumDetailActionViewDelegate;

@interface AlumDetailActionView : UITableViewCell
{
    id <AlumDetailActionViewDelegate> _delegate;
    long long _number;
    UIButton *_playBtn;
    UIButton *_downloadBtn;
    UILabel *_numberLabel;
    UIView *_bottomLine;
}

@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) __weak UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(nonatomic) __weak UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) __weak id <AlumDetailActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getListNum;
- (void)didClickDownloadBtn:(id)arg1;
- (void)playBtnDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)_initializeBottomline;
- (void)_initializeDownloadBtn;
- (void)_initializeNumLabel;
- (void)_initializePlayBtn;
- (void)_initializeBackground;
- (void)_initializeSelf;
- (void)_initializeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

