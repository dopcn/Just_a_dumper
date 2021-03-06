//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AFHTTPSessionManager;
@protocol BMRecommendDishServiceDelegate;

@interface BMRecommendDishService : NSObject
{
    AFHTTPSessionManager *_httpClient;
    id <BMRecommendDishServiceDelegate> _delegate;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak id <BMRecommendDishServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)recommendDishsWithParams:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

