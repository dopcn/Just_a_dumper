//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSCConsumer : NSObject
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthSecret;
}

@property(copy, nonatomic) NSString *oauthSecret; // @synthesize oauthSecret=_oauthSecret;
@property(copy, nonatomic) NSString *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (void)dealloc;

@end

