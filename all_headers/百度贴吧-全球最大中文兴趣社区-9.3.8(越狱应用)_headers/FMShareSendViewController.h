//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseViewController.h"

@class NSData, NSString, UIImage, UILabel, UITextView;

@interface FMShareSendViewController : TBCBaseViewController
{
    int _shareType;
    NSString *_shareText;
    NSString *_shareLink;
    NSString *_imageUrl;
    NSString *_shareContent;
    NSString *_displayText;
    UILabel *_topBarTitle;
    UITextView *_textView;
    NSData *_imageData;
    UIImage *_image;
}

- (void)didReceiveMemoryWarning;
- (void)onShare;
- (void)onback;
- (void)initTitle;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(int)arg1 shareText:(id)arg2 link:(id)arg3 imageUrl:(id)arg4 content:(id)arg5 displayText:(id)arg6 image:(id)arg7;
- (id)initWithType:(int)arg1 shareText:(id)arg2 link:(id)arg3 imageUrl:(id)arg4 content:(id)arg5 displayText:(id)arg6 imageData:(id)arg7;
- (id)initWithType:(int)arg1 shareText:(id)arg2 link:(id)arg3 content:(id)arg4 displayText:(id)arg5;
- (id)initWithType:(int)arg1 shareText:(id)arg2;

@end

