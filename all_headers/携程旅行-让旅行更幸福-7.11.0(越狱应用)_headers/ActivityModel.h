//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ActivityModel : CTBusinessBean
{
    NSString *iconConfigJson;
    NSString *posterId;
    NSString *posterFile;
    NSString *buttonUrl;
    NSString *buttonFile;
    NSString *notificationJson;
}

@property(copy, nonatomic) NSString *notificationJson; // @synthesize notificationJson;
@property(copy, nonatomic) NSString *buttonFile; // @synthesize buttonFile;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl;
@property(copy, nonatomic) NSString *posterFile; // @synthesize posterFile;
@property(copy, nonatomic) NSString *posterId; // @synthesize posterId;
@property(copy, nonatomic) NSString *iconConfigJson; // @synthesize iconConfigJson;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

