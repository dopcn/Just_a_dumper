//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface LCNoCourseGotoliveView : UIView
{
    CDUnknownBlockType _gotoliveBlock;
    UIImageView *_noCourseImage;
    UIButton *_gotoliveButton;
}

+ (id)loadNoCourseGotoliveView;
@property(nonatomic) __weak UIButton *gotoliveButton; // @synthesize gotoliveButton=_gotoliveButton;
@property(nonatomic) __weak UIImageView *noCourseImage; // @synthesize noCourseImage=_noCourseImage;
@property(copy, nonatomic) CDUnknownBlockType gotoliveBlock; // @synthesize gotoliveBlock=_gotoliveBlock;
- (void).cxx_destruct;
- (void)gotoliveButtonClick:(id)arg1;
- (void)awakeFromNib;

@end

