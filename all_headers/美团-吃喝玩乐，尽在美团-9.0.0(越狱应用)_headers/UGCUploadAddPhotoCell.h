//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIView;

@interface UGCUploadAddPhotoCell : UICollectionViewCell
{
    UIView *_customView;
    CDUnknownBlockType _addPhoto;
    UIButton *_addImgBtn;
}

@property(retain, nonatomic) UIButton *addImgBtn; // @synthesize addImgBtn=_addImgBtn;
@property(copy, nonatomic) CDUnknownBlockType addPhoto; // @synthesize addPhoto=_addPhoto;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAddImgEnable:(_Bool)arg1;
- (void)addPhoto:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

