//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GJGCTopicCateModel : NSObject
{
    NSString *_iconUrlStr;
    NSString *_title;
    NSString *_topicCateType;
    NSString *_h5URLStr;
    NSString *_feedType;
    NSString *_subTitle;
}

+ (id)createWithArray:(id)arg1;
+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSString *h5URLStr; // @synthesize h5URLStr=_h5URLStr;
@property(copy, nonatomic) NSString *topicCateType; // @synthesize topicCateType=_topicCateType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrlStr; // @synthesize iconUrlStr=_iconUrlStr;
- (void).cxx_destruct;

@end

