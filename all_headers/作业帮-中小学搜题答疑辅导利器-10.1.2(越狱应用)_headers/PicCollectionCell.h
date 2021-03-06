//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExerciseBaseCollectionCell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class ExerciseErrorDetailViewController, ImageBrowserWireframe, NSString, UIImageView, UILabel;

@interface PicCollectionCell : ExerciseBaseCollectionCell <UIScrollViewDelegate>
{
    UILabel *_answerLabel;
    UILabel *_orginalLabel;
    ImageBrowserWireframe *imageBrowserWireframe;
    UIImageView *_selectImageView;
    ExerciseErrorDetailViewController *_parentViewController;
    UIImageView *_originalImageView;
    UIImageView *_answerImageView;
    NSString *_orginalImagePid;
    NSString *_answerImagePid;
}

@property(copy, nonatomic) NSString *answerImagePid; // @synthesize answerImagePid=_answerImagePid;
@property(copy, nonatomic) NSString *orginalImagePid; // @synthesize orginalImagePid=_orginalImagePid;
@property(nonatomic) __weak UIImageView *answerImageView; // @synthesize answerImageView=_answerImageView;
@property(nonatomic) __weak UIImageView *originalImageView; // @synthesize originalImageView=_originalImageView;
@property(nonatomic) __weak ExerciseErrorDetailViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)refreshSubViewFrame;
- (void)answerImageViewDidTaped:(id)arg1;
- (void)orginalImageViewDidTaped:(id)arg1;
- (struct CGRect)imageViewFrameForImage:(struct CGSize)arg1;
- (void)reloadDataWith:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

