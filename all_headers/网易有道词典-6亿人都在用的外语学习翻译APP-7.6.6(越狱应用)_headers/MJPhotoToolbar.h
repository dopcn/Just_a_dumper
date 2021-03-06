//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UILabel;

@interface MJPhotoToolbar : UIView
{
    UILabel *_indexLabel;
    UIButton *_saveImageBtn;
    NSArray *_photos;
    unsigned long long _currentPhotoIndex;
    unsigned long long _showSaveBtn;
}

@property(nonatomic) unsigned long long showSaveBtn; // @synthesize showSaveBtn=_showSaveBtn;
@property(nonatomic) unsigned long long currentPhotoIndex; // @synthesize currentPhotoIndex=_currentPhotoIndex;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

