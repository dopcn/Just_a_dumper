//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMQAHttpRequest.h"

@protocol SNPMQAMYFollowCountRequestDelegate;

@interface SNPMQAMYFollowCountRequest : SNPMQAHttpRequest
{
    id <SNPMQAMYFollowCountRequestDelegate> _qaDelegate;
}

@property(nonatomic) __weak id <SNPMQAMYFollowCountRequestDelegate> qaDelegate; // @synthesize qaDelegate=_qaDelegate;
- (void).cxx_destruct;
- (void)requestDidCompleted;
- (id)requestUrl;
- (void)requestMyfollow;

@end

