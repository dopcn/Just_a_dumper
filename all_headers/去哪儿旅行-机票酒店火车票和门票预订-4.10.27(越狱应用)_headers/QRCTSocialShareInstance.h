//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UIActivityItemSource-Protocol.h"

@class NSData, NSString;

@interface QRCTSocialShareInstance : NSObject <UIActivityItemSource, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate>
{
    NSString *_title;
    NSString *_desc;
    NSString *_link;
    NSData *_imgUrl;
    unsigned long long _channel;
    NSString *_hid;
}

+ (_Bool)handleShareCallback:(id)arg1;
+ (void)shareWithInfo:(id)arg1 hid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemWithShareInfo:(id)arg1 hid:(id)arg2;
+ (void)registerWeiBoID:(id)arg1;
+ (void)registerQQID:(id)arg1;
+ (void)registerWeChatID:(id)arg1;
@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSData *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)dataWithImage:(id)arg1 scale:(struct CGSize)arg2;
- (id)genQQShareUrl;
- (id)genWeiBoShareUrl;
- (id)genWeChatShareUrl;
- (void)doShare:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

