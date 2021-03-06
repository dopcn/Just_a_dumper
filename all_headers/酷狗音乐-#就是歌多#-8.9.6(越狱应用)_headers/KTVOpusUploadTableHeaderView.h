//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KTVOpusUploadHeaderSubViewDataSource-Protocol.h"
#import "KTVOpusUploadHeaderSubViewDelegate-Protocol.h"

@class KTVCommonTableViewRE, KTVOpusUploadHeaderSubView, KTVThemeLabel, NSString, UIImageView;
@protocol KTVOpusUploadTableHeaderViewDataSource, KTVOpusUploadTableHeaderViewDelegate;

@interface KTVOpusUploadTableHeaderView : UIView <KTVOpusUploadHeaderSubViewDelegate, KTVOpusUploadHeaderSubViewDataSource>
{
    long long _type;
    double _contentViewH;
    id <KTVOpusUploadTableHeaderViewDelegate> _delegate;
    id <KTVOpusUploadTableHeaderViewDataSource> _dataSource;
    KTVCommonTableViewRE *_tableView;
    UIImageView *_coverBgImgView;
    UIImageView *_coverImageView;
    KTVThemeLabel *_changeCoverLabel;
    KTVOpusUploadHeaderSubView *_contentView;
    UIView *_coverBgMask;
}

@property(nonatomic) __weak UIView *coverBgMask; // @synthesize coverBgMask=_coverBgMask;
@property(nonatomic) __weak KTVOpusUploadHeaderSubView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak KTVThemeLabel *changeCoverLabel; // @synthesize changeCoverLabel=_changeCoverLabel;
@property(nonatomic) __weak UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak UIImageView *coverBgImgView; // @synthesize coverBgImgView=_coverBgImgView;
@property(nonatomic) __weak KTVCommonTableViewRE *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <KTVOpusUploadTableHeaderViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <KTVOpusUploadTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSongButtonTitle:(id)arg1;
- (void)fillSongLabelWithImgURL:(id)arg1;
@property(copy, nonatomic) NSString *inputText;
@property(copy, nonatomic) NSString *placeHolder;
- (void)reloadImageLayoutView;
- (void)endEdit;
- (void)KTVOpusUploadHeaderSubViewDidClickSongTitleButton:(id)arg1;
- (void)KTVOpusUploadHeaderSubViewDidClickAddSongLabelButton:(id)arg1;
- (void)KTVOpusUploadHeaderSubViewDidClickCancelLocationButton:(id)arg1;
- (void)KTVOpusUploadHeaderSubViewDidClickLocationButton:(id)arg1;
- (void)KTVOpusUploadHeaderSubViewImageLayoutViewAddImage:(id)arg1;
- (void)KTVOpusUploadHeaderSubView:(id)arg1 didClickImageAtIndex:(long long)arg2 operationType:(long long)arg3;
- (void)KTVOpusUploadHeaderSubViewDidClickCameraButton:(id)arg1;
- (void)KTVOpusUploadHeaderSubViewDidImagesDidChanged:(id)arg1 dy:(double)arg2;
- (void)KTVOpusUploadHeaderSubView:(id)arg1 loadImageForButton:(id)arg2 index:(long long)arg3;
- (long long)KTVOpusUploadHeaderSubView_imageLayoutViewNumberOfImages;
- (void)layoutSubviews;
- (void)coverBgImgViewTap;
- (void)setCoverImageURL:(id)arg1 defaultImage:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setCoverImage:(id)arg1;
- (void)setLocation:(id)arg1 isHightLight:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double defaultHeight;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

