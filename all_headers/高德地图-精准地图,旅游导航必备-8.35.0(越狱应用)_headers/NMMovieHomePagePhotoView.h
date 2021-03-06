//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class NMMovieFloorView, UIButton, UIImageView, UILabel, UIView;
@protocol NMMovieHomePagePhotoViewDelegate;

@interface NMMovieHomePagePhotoView : LTMBaseView
{
    UIButton *_photoBtn;
    UIButton *_zuoBtn;
    NMMovieFloorView *_picFloorView;
    UIView *_footerView;
    UILabel *_nameLabel;
    UILabel *_gradeLabel;
    UIImageView *_addImgView;
    UILabel *_addressLabel;
    UIImageView *_timeImgView;
    UILabel *_timeLabel;
    UILabel *_lagLabel;
    id <NMMovieHomePagePhotoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMMovieHomePagePhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *lagLabel; // @synthesize lagLabel=_lagLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *timeImgView; // @synthesize timeImgView=_timeImgView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIImageView *addImgView; // @synthesize addImgView=_addImgView;
@property(retain, nonatomic) UILabel *gradeLabel; // @synthesize gradeLabel=_gradeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NMMovieFloorView *picFloorView; // @synthesize picFloorView=_picFloorView;
@property(retain, nonatomic) UIButton *zuoBtn; // @synthesize zuoBtn=_zuoBtn;
@property(retain, nonatomic) UIButton *photoBtn; // @synthesize photoBtn=_photoBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHomePagePhotoViewInfo:(id)arg1;
- (void)loadMoviePhotoView;
- (void)photoBtnPress:(id)arg1;
- (void)zuoBtnPress:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

