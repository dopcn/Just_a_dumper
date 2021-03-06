//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVObjectModel.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface KTV_TopicInfo : KTVObjectModel <NSCopying>
{
    int topicType;
    NSString *topicName;
    NSString *topicDescription;
    NSString *topicThumbUrl;
    NSString *topicUrl;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString *topicUrl; // @synthesize topicUrl;
@property(retain, nonatomic) NSString *topicThumbUrl; // @synthesize topicThumbUrl;
@property(retain, nonatomic) NSString *topicDescription; // @synthesize topicDescription;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName;
@property(nonatomic) int topicType; // @synthesize topicType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

