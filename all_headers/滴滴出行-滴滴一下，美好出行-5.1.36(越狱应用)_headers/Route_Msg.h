//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString;
@protocol Optional;

@interface Route_Msg : TRBaseModel
{
    NSString<Optional> *_route_id;
    NSString<Optional> *_route_tag;
}

@property(copy, nonatomic) NSString<Optional> *route_tag; // @synthesize route_tag=_route_tag;
@property(copy, nonatomic) NSString<Optional> *route_id; // @synthesize route_id=_route_id;
- (void).cxx_destruct;

@end

