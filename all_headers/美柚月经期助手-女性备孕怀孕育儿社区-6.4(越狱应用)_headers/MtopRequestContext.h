//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MtopExtRequest, MtopExtResponse;

@interface MtopRequestContext : NSObject
{
    int _action;
    MtopExtRequest *_request;
    MtopExtResponse *_response;
}

@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) MtopExtResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

