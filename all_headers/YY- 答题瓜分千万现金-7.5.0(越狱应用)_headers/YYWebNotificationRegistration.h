//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface YYWebNotificationRegistration : NSObject
{
    NSString *_webID;
    id _webView;
    NSArray *_methods;
    NSMutableArray *_contexts;
}

@property(retain, nonatomic) NSMutableArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
@property(retain, nonatomic) id webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *webID; // @synthesize webID=_webID;
- (void).cxx_destruct;
- (id)init;

@end

