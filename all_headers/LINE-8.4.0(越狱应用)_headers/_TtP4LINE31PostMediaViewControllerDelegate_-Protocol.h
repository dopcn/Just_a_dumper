//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MBRecallInfo, NLProfileMediaView, NSString, NSURL, UILabel, _TtC4LINE23PostMediaViewController, _TtC4LINE4Post;

@protocol _TtP4LINE31PostMediaViewControllerDelegate_ <NSObject>
- (void)postMediaViewController:(_TtC4LINE23PostMediaViewController *)arg1 didSelectLink:(NSURL *)arg2 post:(_TtC4LINE4Post *)arg3;
- (void)postMediaViewController:(_TtC4LINE23PostMediaViewController *)arg1 didSelectRecallInfo:(MBRecallInfo *)arg2 post:(_TtC4LINE4Post *)arg3;
- (void)postMediaViewController:(_TtC4LINE23PostMediaViewController *)arg1 didSelectHashTag:(NSString *)arg2 post:(_TtC4LINE4Post *)arg3;
- (void)postMediaViewController:(_TtC4LINE23PostMediaViewController *)arg1 didTapNameLabel:(UILabel *)arg2 post:(_TtC4LINE4Post *)arg3;
- (void)postMediaViewController:(_TtC4LINE23PostMediaViewController *)arg1 didTapProfileView:(NLProfileMediaView *)arg2 post:(_TtC4LINE4Post *)arg3;
@end

