//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface WKReaderTKAlertView : UIView
{
    struct CGRect _messageRect;
    NSString *_text;
    UIImage *_image;
}

- (void)setImage:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)adjust;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawRoundRectangleInRect:(struct CGRect)arg1 withRadius:(double)arg2;
- (id)init;

@end

