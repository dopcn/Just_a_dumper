//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LiveGrabChatViewModel : NSObject
{
    _Bool _micSwitch;
    long long _courseId;
    long long _lessonId;
    long long _classId;
    unsigned long long _teacherId;
    long long _courseType;
    unsigned long long _uid;
}

+ (void)notifyMicActionLog:(long long)arg1 action:(long long)arg2 msg:(id)arg3;
+ (void)hangupMicWithCourseId:(long long)arg1 lessonId:(long long)arg2 classId:(long long)arg3 toUid:(unsigned long long)arg4 complete:(CDUnknownBlockType)arg5;
+ (void)joinRoomWithUserId:(long long)arg1 roomId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool micSwitch; // @synthesize micSwitch=_micSwitch;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long courseType; // @synthesize courseType=_courseType;
@property(nonatomic) unsigned long long teacherId; // @synthesize teacherId=_teacherId;
@property(nonatomic) long long classId; // @synthesize classId=_classId;
@property(nonatomic) long long lessonId; // @synthesize lessonId=_lessonId;
@property(nonatomic) long long courseId; // @synthesize courseId=_courseId;
- (id)cancelMicWithCourseId:(long long)arg1 lessonId:(long long)arg2 lassId:(long long)arg3;
- (id)applyMicWithCourseId:(long long)arg1 lessonId:(long long)arg2 lassId:(long long)arg3 micPrivilege:(long long)arg4;

@end

