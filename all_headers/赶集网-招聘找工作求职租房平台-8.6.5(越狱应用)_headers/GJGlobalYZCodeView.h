//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface GJGlobalYZCodeView : UIView
{
    UIImage *codeImage;
    CDUnknownBlockType finish;
}

@property(retain, nonatomic) UIImage *codeImage; // @synthesize codeImage;
@property(copy, nonatomic) CDUnknownBlockType finish; // @synthesize finish;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didMoveToSuperview;
- (void)dealloc;
- (void)getImage;
- (void)btnClick:(id)arg1;
- (id)haveFontWithCustomer:(id)arg1 withSize:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

