//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YXGestureViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, YXGestureView;

@interface PhotoEditorManager : NSObject <YXGestureViewDelegate>
{
    UIImageView *_orignalImageView;
    NSMutableArray *_toAddViewsList;
    YXGestureView *_currentEditingView;
    double _scaleRatio;
}

+ (id)imageWithView:(id)arg1;
@property(nonatomic) double scaleRatio; // @synthesize scaleRatio=_scaleRatio;
@property(retain, nonatomic) YXGestureView *currentEditingView; // @synthesize currentEditingView=_currentEditingView;
- (void).cxx_destruct;
- (void)removeFromImage:(id)arg1;
- (void)updateOtherViewsStatus:(id)arg1;
- (_Bool)isImageEdited;
- (_Bool)canBeAddedMore:(long long)arg1;
- (void)updateCurrentEditingView:(id)arg1;
- (struct CGSize)getEditedImageSizeWithEditorSize:(struct CGSize)arg1;
- (id)combinedImage:(int)arg1 originImage:(id)arg2;
- (void)addNewGestureView:(id)arg1;
- (void)tapDetected:(id)arg1;
- (void)initGestureRecognizers;
- (id)initWithOrignalImageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

