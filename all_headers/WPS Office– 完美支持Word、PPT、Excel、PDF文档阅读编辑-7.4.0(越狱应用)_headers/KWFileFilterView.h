//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface KWFileFilterView : UIView
{
    UILabel *_allLabel;
    UILabel *_starLabel;
    UILabel *_localLabel;
    UIImageView *_selectedImageView;
    UIImageView *_allImgView;
    UIImageView *_starImgView;
    CDUnknownBlockType _block;
    long long _currentFileFilterType;
}

@property(nonatomic) long long currentFileFilterType; // @synthesize currentFileFilterType=_currentFileFilterType;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) __weak UIImageView *starImgView; // @synthesize starImgView=_starImgView;
@property(nonatomic) __weak UIImageView *allImgView; // @synthesize allImgView=_allImgView;
@property(nonatomic) __weak UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) __weak UILabel *localLabel; // @synthesize localLabel=_localLabel;
@property(nonatomic) __weak UILabel *starLabel; // @synthesize starLabel=_starLabel;
@property(nonatomic) __weak UILabel *allLabel; // @synthesize allLabel=_allLabel;
- (void).cxx_destruct;
- (void)didSelected:(id)arg1;
- (void)awakeFromNib;

@end

