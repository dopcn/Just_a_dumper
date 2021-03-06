//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZEVEditViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, QZEVFilterPicker, UIImageView, UIScrollView;

@interface QZEVEditPhotoViewController : QZEVEditViewController <UIScrollViewDelegate>
{
    UIImageView *_photoView;
    UIScrollView *_previewView;
    QZEVFilterPicker *_filterPicker;
}

@property(retain, nonatomic) QZEVFilterPicker *filterPicker; // @synthesize filterPicker=_filterPicker;
@property(nonatomic) __weak UIScrollView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak UIImageView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)editComponent:(id)arg1 didCropToRect:(struct CGRect)arg2 andAngle:(long long)arg3;
- (void)updateContainerWithCropRect:(struct CGRect)arg1 angle:(long long)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)refreshPhotoView;
- (void)stopPreview;
- (void)startPreview;
- (_Bool)shouldDeleteModel;
- (_Bool)shouldCancelEditing;
- (void)setEditComponentFactory:(id)arg1;
- (void)setBarMask:(long long)arg1;
- (void)setMedia:(id)arg1;
- (void)setupGesture;
- (void)initContentView;
- (void)initPhotoView;
- (void)initPreviewView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

