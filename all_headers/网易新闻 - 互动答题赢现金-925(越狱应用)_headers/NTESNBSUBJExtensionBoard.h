//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface NTESNBSUBJExtensionBoard : UIView
{
    CDUnknownBlockType _extensionBlock;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImageView *_topLine;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) CDUnknownBlockType extensionBlock; // @synthesize extensionBlock=_extensionBlock;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (void)updateTheme;
- (id)init;

@end

