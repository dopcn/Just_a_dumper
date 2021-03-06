//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionViewCell.h"

@class NSIndexPath, UIButton, UIImageView;
@protocol MWFeedbackImageCellDelegate;

@interface MWFeedbackImageCell : CollectionViewCell
{
    _Bool _isAdd;
    id <MWFeedbackImageCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    UIImageView *_imageView;
    UIButton *_removeButton;
}

@property(nonatomic) _Bool isAdd; // @synthesize isAdd=_isAdd;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <MWFeedbackImageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeImageAction:(id)arg1;
- (void)makeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

